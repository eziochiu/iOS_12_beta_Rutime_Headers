/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWOverlaidRectangleProvider : NSObject {
    int  _displayStyle;
    BWOverlaidRectangle * _overlaidRectangle;
    id /* block */  _providerBlock;
}

- (void)dealloc;
- (id)initWithDisplayStyle:(int)arg1 providerBlock:(id /* block */)arg2;
- (id)update;

@end
