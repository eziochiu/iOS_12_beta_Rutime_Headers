/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSTabBarItem : IKJSObject <IKJSTabBarItem, NSObject, _IKJSTabBarItem, _IKJSTabBarItemProxy> {
    NSString * _identifier;
    JSManagedValue * _managedNavigationDocument;
    JSManagedValue * _managedSelf;
    <IKAppNavigationController> * _navigationControllerDelegate;
    IKJSNavigationDocument * _navigationDocument;
    IKJSTabBar * _owner;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) JSManagedValue *managedNavigationDocument;
@property (nonatomic, retain) JSManagedValue *managedSelf;
@property (nonatomic, readonly) <IKAppNavigationController> *navigationControllerDelegate;
@property (nonatomic, readonly) IKJSNavigationDocument *navigationDocument;
@property (nonatomic) IKJSTabBar *owner;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)asPrivateIKJSTabBarItem;
- (void)dealloc;
- (id)identifier;
- (id)initWithAppContext:(id)arg1 identifier:(id)arg2 navigationController:(id)arg3 owner:(id)arg4;
- (id)managedNavigationDocument;
- (id)managedSelf;
- (id)navigationControllerDelegate;
- (id)navigationDocument;
- (id)owner;
- (void)setManagedNavigationDocument:(id)arg1;
- (void)setManagedSelf:(id)arg1;
- (void)setOwner:(id)arg1;

@end
