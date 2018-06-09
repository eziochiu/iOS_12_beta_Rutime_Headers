/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFModernLabelledAtomList : UIView <MFModernAddressAtomDelegate, MFPassthroughViewProvider> {
    NSMutableArray * _addressAtoms;
    void * _addressBook;
    NSArray * _addresses;
    <MFModernLabelledAtomListDelegate> * _delegate;
    UILabel * _label;
    UIColor * _labelTextColor;
    bool  _labelVisible;
    UILabel * _lastBaselineDeceptionLabel;
    double  _lineSpacing;
    unsigned int  _needsReflow;
    unsigned long long  _numberOfRows;
    double  _previousWidth;
    bool  _primary;
    NSString * _title;
    NSArray * _viewsToDodge;
}

@property (nonatomic, copy) NSArray *addresses;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MFModernLabelledAtomListDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UILabel *label;
@property (nonatomic, retain) UIColor *labelTextColor;
@property (getter=isLabelVisible, nonatomic) bool labelVisible;
@property (nonatomic) double lineSpacing;
@property (nonatomic, readonly) unsigned long long numberOfRows;
@property (getter=isPrimary, nonatomic) bool primary;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *viewsToDodge;

+ (double)atomLineHeight;
+ (id)defaultLabelFont;
+ (id)defaultLabelTextColor;
+ (id)primaryLabelFont;
+ (double)spaceBetweenColonAndFirstAtomNaturalEdge;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForAtomAtIndex:(unsigned long long)arg1 withStartingPoint:(struct CGPoint { double x1; double x2; })arg2 row:(inout unsigned long long*)arg3;
- (void)_reflow;
- (void)_reflowIfNeeded;
- (double)_remainingSpaceForRowAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setNeedsReflow;
- (void)addressAtom:(id)arg1 displayStringDidChange:(id)arg2;
- (id)addressAtoms;
- (void)addressBookDidChange:(id)arg1;
- (id)addresses;
- (id)atomDisplayStrings;
- (struct CGPoint { double x1; double x2; })baselinePointForRow:(unsigned long long)arg1;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)crossFadeLabelVisibility:(bool)arg1 atomSeparatorStyle:(int)arg2 withAnimationCoordinator:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (void)enumerateAddressAtomsUsingBlock:(id /* block */)arg1;
- (id)initWithLabel:(id)arg1 title:(id)arg2 addressBook:(const void*)arg3;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isLabelVisible;
- (bool)isPrimary;
- (id)label;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })labelFrame;
- (id)labelText;
- (id)labelTextColor;
- (void)layoutSubviews;
- (double)lineSpacing;
- (unsigned long long)numberOfRows;
- (id)passthroughViews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setAddressAtomScale:(double)arg1;
- (void)setAddressAtomSeparatorStyle:(int)arg1;
- (void)setAddressAtomTarget:(id)arg1 action:(SEL)arg2;
- (void)setAddressAtomsArePrimary:(bool)arg1;
- (void)setAddresses:(id)arg1;
- (void)setAddresses:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setAtomAlpha:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLabelTextColor:(id)arg1;
- (void)setLabelVisible:(bool)arg1;
- (void)setLineSpacing:(double)arg1;
- (void)setOpaque:(bool)arg1;
- (void)setOverrideFont:(id)arg1;
- (void)setPrimary:(bool)arg1;
- (void)setViewsToDodge:(id)arg1;
- (id)title;
- (void)updateAtomsForVIP;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (id)viewsToDodge;

@end
