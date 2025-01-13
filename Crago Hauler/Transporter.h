#ifndef TRANSPORTER_H
#define TRANSPORTER_H

class Transporter {
public:
    virtual ~Transporter() = default; // Virtual destructor
    virtual void load(void* item) = 0; // Pure virtual functions
    virtual void move() = 0;
    virtual void unload() = 0;
    virtual void empty() = 0;
    virtual bool isEmpty() const = 0;
};

#endif