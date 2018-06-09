/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIMainPrinterUtilityCell : UITableViewCell {
    bool  _showSupplyDataUnderPrinterName;
    NSArray * _supplies;
    NSArray * _supplyLevelViews;
}

@property (nonatomic) bool showSupplyDataUnderPrinterName;
@property (nonatomic, retain) NSArray *supplies;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setShowSupplyDataUnderPrinterName:(bool)arg1;
- (void)setSupplies:(id)arg1;
- (bool)showSupplyDataUnderPrinterName;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)supplies;

@end
