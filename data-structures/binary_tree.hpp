template<typename T> class binary_tree {

  public:
  struct node {
    node* left;
    node* right;
    typename value;
  }

  binary_tree() {
    root = NULL;
  }

  ~binary_tree() {}

  private:
  node* root;
}
