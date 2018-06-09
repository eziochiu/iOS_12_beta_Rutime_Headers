/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUITabularLockupColumn : NSObject {
    NSMutableArray * _childViewElements;
    long long  _identifier;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly, copy) NSArray *childViewElements;
@property (nonatomic) long long identifier;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

- (void).cxx_destruct;
- (void)_addChildViewElement:(id)arg1;
- (id)childViewElements;
- (id)description;
- (long long)identifier;
- (id)initWithColumnIdentifier:(long long)arg1;
- (void)setIdentifier:(long long)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
