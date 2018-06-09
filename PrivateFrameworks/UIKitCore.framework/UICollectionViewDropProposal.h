/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UICollectionViewDropProposal : UIDropProposal {
    long long  _intent;
}

@property (nonatomic) long long intent;

- (id)description;
- (long long)dropLocation;
- (id)initWithDropOperation:(unsigned long long)arg1;
- (id)initWithDropOperation:(unsigned long long)arg1 dropLocation:(long long)arg2;
- (id)initWithDropOperation:(unsigned long long)arg1 intent:(long long)arg2;
- (long long)intent;
- (void)setIntent:(long long)arg1;

@end
