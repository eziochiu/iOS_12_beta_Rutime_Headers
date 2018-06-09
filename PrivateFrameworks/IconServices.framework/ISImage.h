/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

@interface ISImage : NSObject {
    struct CGImage { } * _CGImage;
    bool  _placeholder;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSUUID * _uuid;
}

@property (readonly) struct CGImage { }*CGImage;
@property (readonly) bool placeholder;
@property (readonly) double scale;
@property (readonly) struct CGSize { double x1; double x2; } size;
@property (retain) NSUUID *uuid;

- (void).cxx_destruct;
- (struct CGImage { }*)CGImage;
- (void)dealloc;
- (id)initWithData:(id)arg1 scale:(double)arg2;
- (bool)placeholder;
- (double)scale;
- (void)setUuid:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)uuid;

@end
