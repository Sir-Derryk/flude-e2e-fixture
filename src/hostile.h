#pragma once
#include <string>

/**
 * @brief Hostile links.
 *
 * [case](JaVaScRiPt:alert('case')) [entity](&#106;avascript:alert('entity')) [vb](vbscript:msgbox) [data](data:text/html;base64,PHNjcmlwdD5hbGVydCgxKTwvc2NyaXB0Pg==)
 * ![imgjs](javascript:alert('imgjs')) <img src=x onerror=alert('raw')> <script>alert('raw')</script>
 * [ref][r1]
 *
 * [r1]: javascript:alert('ref1')
 * Safe: [https](https://example.org/x) [mail](mailto:a@b.example) [rel](../other.md)
 */
class HostileWidget {
public:
    /// Backtick breakout: x` <img src=x onerror=alert('backtick')> `y
    int run(const char* s = "`<img src=x onerror=alert('signature')>`");

    /// Double: ``<script>alert('double')</script>``
    void stop();
};

/** Enum */
enum class HostileMode {
    /// triple then single: ``` <svg onload=alert('triple')> `
    On,
    /// <iframe src=x></iframe> <style>x{}</style>
    Off
};
