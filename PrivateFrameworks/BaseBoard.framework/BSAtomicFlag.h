/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSAtomicFlag : NSObject {
    bool  _flag;
}

- (id)description;
- (bool)getFlag;
- (id)init;
- (id)initWithFlag:(bool)arg1;
- (bool)setFlag:(bool)arg1;

@end
