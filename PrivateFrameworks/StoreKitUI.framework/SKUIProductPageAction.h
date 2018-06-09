/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIProductPageAction : NSObject {
    long long  _actionType;
    SKUIItem * _item;
    NSURL * _url;
    NSString * _urlTitle;
    id /* block */  _viewControllerBlock;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic) long long actionType;
@property (nonatomic, retain) SKUIItem *item;
@property (nonatomic, readonly) UIViewController *viewController;
@property (nonatomic, copy) id /* block */ viewControllerBlock;

+ (id)actionWithType:(long long)arg1;

- (void).cxx_destruct;
- (id)URL;
- (long long)actionType;
- (id)item;
- (void)setActionType:(long long)arg1;
- (void)setItem:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setViewControllerBlock:(id /* block */)arg1;
- (id)viewController;
- (id /* block */)viewControllerBlock;

@end
