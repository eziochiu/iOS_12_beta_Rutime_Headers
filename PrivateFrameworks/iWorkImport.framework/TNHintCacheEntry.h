/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNHintCacheEntry : NSObject {
    <TSDHint> * mHint;
    bool  mIsValid;
    struct CGPoint { 
        double x; 
        double y; 
    }  mOrigin;
}

@property (retain) <TSDHint> *hint;
@property struct CGPoint { double x1; double x2; } origin;
@property (getter=isValid) bool valid;

- (void)dealloc;
- (id)hint;
- (id)initWithHint:(id)arg1 origin:(struct CGPoint { double x1; double x2; })arg2;
- (bool)isValid;
- (struct CGPoint { double x1; double x2; })origin;
- (void)setHint:(id)arg1;
- (void)setOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setValid:(bool)arg1;

@end
