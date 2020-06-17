#include <iostream>
using namespace std;
/* 1. Створенні бінарного дерева +++++++++
2. Додавання елемента до бінарного дерева. ++++++++++++++
3. Видалення елемента з бінарного дерева.++++++++++++++++++++++++
4. Видалення бінарного дерева.++++++++++++++++++++++++++++
5. Перевірка бінарного дерева на пустоту. ++++++++++++++++++++++
6. Знаходження та видобування даних.+++++++++++++++++++++++++++
7. Копіювання бінарного дерева.
8. Обхід бінарного дерева за трьома різними маршрутами.+++++++++++++++++++++++
9. Виведення на консоль всіх елементів дерева. +++++++++++++++
 */
struct Tree
{
    int data;
    Tree *right;
    Tree *left;
    int indent = 0;
    Tree()
    {
        left = nullptr;
        right = nullptr;
    }
//////////////////////////////////////////////////
    bool Empty(Tree *root)
    {
        return root == nullptr;
    }
    //////////////////////////////////////////////
    Tree* Add(Tree *root, int el)
    {
        if (Empty(root))
        {
            root = new Tree();
            root->data = el;
            root->right = nullptr;
            root->left = nullptr;

        } else
        {
            if (el <= root->data) root->left = Add(root->left, el);
            else root->right = Add(root->right, el);
        }
    }
/////////////////////////////////////////////////
    Tree* Find(Tree *root, int el)
    {
        int temp;
        if (root->data == el) return root;
        else
        {
            if (el < root->data) Find(root->left, el);
            else if (el > root->data) Find(root->right, el);
        }
    }
    ///////////////////////////////////////////////////
    Tree* min(Tree* root)
    {
        while (root->left != nullptr)
        {
            root = root->left;
        }
        return root;
    }
/////////////////////////////////////////////////*/
 Tree* Delete(Tree* root, int el)
  {
      if (root == nullptr)
      {
          return root;
      }
      else if (el < root->data)
      {
          root->left = Delete(root->left, el);
      }
      else if (el > root->data)
      {
          root->right = Delete(root->right, el);
      }
      else
      {
          if (root->left == nullptr && root->right == nullptr)
          {
              delete root;
              root = nullptr;
          }
          else if (root->left == nullptr)
          {
              Tree* r = root;
              root = root->right;
              delete r;
          }
          else if (root->right == nullptr)
          {
              Tree* r = root;
              root = root->left;
              delete r;
          }
          else
          {
              Tree* r = min(root->right);
              root->data = r->data;
              root->right = Delete(root->right, r->data);
          }
      }
      return root;
  }
  ////////////////////////////////////////////////////////////////////
    void Print(Tree *root) //вивід дерева в звичайному вигляді
    {
        if (root == NULL)
            return; //вихід з функції
        indent++;
        Print(root->right); //ідемо направо
        for (int i = 0; i < indent; i++)
            cout << "--";
        cout << root->data << endl;
        Print(root->left); //ідемо наліво
        indent--;
        return;
    }
    /////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////
    void Inorder(Tree* root)
    {
        if(!Empty(root))
        {
            Inorder(root->left);
            cout << root->data << " ";
            Inorder(root->right);
        }
    }
    ////////////////////////////////////////////////////////////
    void Preorder(Tree* root)
    {
        if (!Empty(root))
        {
            cout << root->data << " ";
            Preorder(root->left);
            Preorder(root->right);
        }
    }
    //////////////////////////////////////////////////////////
    void Postorder(Tree* root)
    {
        if (!Empty(root))
        {
            Postorder(root->left);
            Postorder(root->right);
            cout << root->data << " ";
        }
    }
    Tree* Copy(Tree* root)
    {
        if (!Empty(root))
        {
            Tree *newc = new Tree();
            newc->data = root->data;
            newc->left = Copy(root->left);
            newc->right = Copy(root->right);
            return newc;
        }
    }
    void DeleteTree(Tree *root)
    {
        if (!Empty(root))
        {
            DeleteTree(root->left);
            DeleteTree(root->right);
            delete (root);
        }
    }

};

int main() {
    Tree b;
    Tree *root = nullptr;
    Tree * copy = nullptr;
    Tree* ptr = nullptr;
    int op = 1, el;
    cout << "1. Create a binary tree\n2. Add element\n3. Delete element\n"
            "4. Delete tree\n5. Check if empty\n6. Find and show element\n7. "
            "Copy tree\n8. Show all elements\n9. Inorder show\n10. Preorder show\n"
            "11. Postorder show\n0. Exit" << endl;
    while (op != 0)
    {
        cout << "Chose operation: ";
        cin >> op;
        switch (op)
        {
            case 1: cout << "Tree have been created" << endl;
                break;
            case 2: cout << "Enter element: ";
                cin >> el;
                root = b.Add(root, el);
                cout << "Element (" << el << ") has been added" << endl;
                break;
            case 3: cout << "Enter element: ";
                cin >> el;
                if (!b.Empty(root)) b.Delete(root, el);
                cout << "Element (" << el << ") has been deleted" << endl;
                break;
            case 4: b.DeleteTree(root);
                cout << "Tree has been deleted";
                break;
            case 5: if (b.Empty(root)) cout << "Tree is empty"  << endl;
                else cout << "Tree isn't empty"  << endl;
                break;
            case 6: cout << "Enter element: ";
                cin >> el;
                if (!b.Empty(root)) ptr = b.Find(root, el);
                cout << "Element (" << ptr->data << ") has been finded" << endl;
                break;
            case 7: copy = b.Copy(root);
                cout << "Tree has been copied" << endl;
                break;
            case 8: cout << "Elements of tree: " << endl;
                b.Print(root);
                cout << endl;
                break;
            case 9: cout << "Inorder show: ";
                b.Inorder(root);
                cout << endl;
                break;
            case 10: cout << "Preorder show: ";
                b.Preorder(root);
                cout << endl;
                break;
            case 11: cout << "Postorder show: ";
                b.Postorder(root);
                cout << endl;
                break;
            default: break;
        }
    }
    return 0;
}