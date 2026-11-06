#pragma once

/** A tokenizer whose template parameter has a double quote in its default value. */
template <char Quote = '"'> class Tokenizer {
public:
    /** Runs. */
    void run();
};

/** A splitter whose template parameter has a backslash in its default value. */
template <char Sep = '\'> class Splitter {
public:
    /** Runs. */
    void run();
};
