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

  void add(typename value) {
    if (root == NULL) {
      root = new node;
      root.value = value;
    } else {
      // TODO
    }
  }

  ~binary_tree() {}

  private:
  node* root;
}
