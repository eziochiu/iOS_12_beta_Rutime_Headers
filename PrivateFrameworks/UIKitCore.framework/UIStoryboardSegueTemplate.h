/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIStoryboardSegueTemplate : NSObject <NSCoding> {
    bool  _animates;
    NSString * _destinationViewControllerIdentifier;
    NSString * _identifier;
    bool  _performOnViewLoad;
    NSString * _segueClassName;
    UIViewController * _viewController;
}

@property (nonatomic) bool animates;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) bool performOnViewLoad;
@property (nonatomic) UIViewController *viewController;

- (void).cxx_destruct;
- (id)_perform:(id)arg1;
- (id)_performWithDestinationViewController:(id)arg1 sender:(id)arg2;
- (bool)animates;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)instantiateOrFindDestinationViewControllerWithSender:(id)arg1;
- (id /* block */)newDefaultPerformHandlerForSegue:(id)arg1;
- (id /* block */)newDefaultPrepareHandlerForSegue:(id)arg1;
- (id)perform:(id)arg1;
- (bool)performOnViewLoad;
- (id)segueWithDestinationViewController:(id)arg1;
- (void)setAnimates:(bool)arg1;
- (void)setPerformOnViewLoad:(bool)arg1;
- (void)setViewController:(id)arg1;
- (id)viewController;

@end
