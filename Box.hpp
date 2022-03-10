
#ifndef TEST_DEMO_BOX_HPP
#define TEST_DEMO_BOX_HPP

class Box {

private:
    float h_{0};
    float b_{0};
    float l_{0};

public:
    Box() = default;
    Box(float h, float b, float l): h_(h), b_(b), l_(l) {}

    float getHeight() const {
        return h_;
    }

    void setHeight(float h) {
        h_ = h;
    }

    float getBreadth() const {
        return b_;
    }

    void setBreadth(float b) {
        b_ = b;
    }

    float getLength() const {
        return l_;
    }

    void setLength(float l) {
        l_ = l;
    }

    float getVolume() const {
        return l_*b_*h_;
    }

};

#endif//TEST_DEMO_BOX_HPP
