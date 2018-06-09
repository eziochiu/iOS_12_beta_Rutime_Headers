/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMAmbientPressureDataInternal : NSObject {
    struct { 
        float pressure; 
        float temperature; 
    }  fPressure;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithPressure:(struct { float x1; float x2; })arg1;
- (void)setAmbientPressure:(struct { float x1; float x2; })arg1;

@end
