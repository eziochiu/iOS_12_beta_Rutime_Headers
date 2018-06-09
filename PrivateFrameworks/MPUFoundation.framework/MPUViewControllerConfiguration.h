/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUViewControllerConfiguration : NSObject {
    Class  _cellConfigurationClass;
    id /* block */  _configurationBlock;
    MPUDataSourceConfiguration * _dataSourceConfiguration;
    Class  _navigationControllerClass;
    Class  _viewControllerClass;
    bool  _wantsModalPresentation;
    bool  _wantsNavigationController;
}

@property (nonatomic, readonly) Class cellConfigurationClass;
@property (nonatomic, copy) id /* block */ configurationBlock;
@property (nonatomic, retain) MPUDataSourceConfiguration *dataSourceConfiguration;
@property (nonatomic, retain) Class navigationControllerClass;
@property (nonatomic, readonly) Class viewControllerClass;
@property (nonatomic) bool wantsModalPresentation;
@property (nonatomic) bool wantsNavigationController;

+ (id)configurationWithViewControllerClass:(Class)arg1;
+ (id)configurationWithViewControllerClass:(Class)arg1 cellConfigurationClass:(Class)arg2;

- (void).cxx_destruct;
- (Class)cellConfigurationClass;
- (id /* block */)configurationBlock;
- (id)dataSourceConfiguration;
- (id)initWithViewControllerClass:(Class)arg1;
- (id)initWithViewControllerClass:(Class)arg1 cellConfigurationClass:(Class)arg2;
- (Class)navigationControllerClass;
- (void)setConfigurationBlock:(id /* block */)arg1;
- (void)setDataSourceConfiguration:(id)arg1;
- (void)setNavigationControllerClass:(Class)arg1;
- (void)setWantsModalPresentation:(bool)arg1;
- (void)setWantsNavigationController:(bool)arg1;
- (Class)viewControllerClass;
- (bool)wantsModalPresentation;
- (bool)wantsNavigationController;

@end
