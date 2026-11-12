/**
 * @brief A small, fully documented widget class -- used as an e2e test fixture
 * for flude-worker (DEL-B23), not real production code.
 */
class Widget {
public:
    /** @brief Constructs a widget. */
    Widget();

    /** @brief Does a thing.
     *  @return true on success.
     */
    bool doThing();
};

class UndocumentedWidget {
public:
    void doAnotherThing();
};
