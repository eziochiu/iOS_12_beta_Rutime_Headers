/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKDataMetadataReportAccessSection : HKDataMetadataSection {
    UIViewController * _accessViewController;
}

@property (nonatomic, readonly) UIViewController *accessViewController;

- (void).cxx_destruct;
- (id)accessViewController;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (id)initWithSample:(id)arg1 healthStore:(id)arg2 delegate:(id)arg3;
- (unsigned long long)numberOfRowsInSection;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(bool)arg3;

@end
