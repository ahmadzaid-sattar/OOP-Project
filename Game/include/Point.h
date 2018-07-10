#ifndef POINT_H
#define POINT_H


class Point
{
    public:
        Point();
        Point(float pointX, float pointY);
        void showPoint();
        virtual ~Point();

    private:
        float pointX;
        float pointY;

};

#endif // POINT_H
