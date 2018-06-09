/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKInteractiveChartAnnotationView : UIView {
    UIStackView * _columnStack;
    UIStackView * _containerStack;
    <HKInteractiveChartAnnotationViewDataSource> * _dataSource;
    bool  _showSeparators;
}

@property (nonatomic, retain) UIStackView *columnStack;
@property (nonatomic, retain) UIStackView *containerStack;
@property (nonatomic) <HKInteractiveChartAnnotationViewDataSource> *dataSource;
@property (nonatomic) bool showSeparators;

- (void).cxx_destruct;
- (void)_configureContainerStack;
- (id)_createSeparatorView;
- (id)columnStack;
- (id)containerStack;
- (id)dataSource;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)reloadData;
- (void)setColumnStack:(id)arg1;
- (void)setContainerStack:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setShowSeparators:(bool)arg1;
- (bool)showSeparators;

@end
