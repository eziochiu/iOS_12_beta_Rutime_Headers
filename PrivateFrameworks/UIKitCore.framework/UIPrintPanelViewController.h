/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPrintPanelViewController : NSObject <UIPrinterBrowserOwner> {
    bool  _animated;
    bool  _canShowColor;
    bool  _contentLargerThanRollPaper;
    bool  _dismissed;
    NSArray * _lastUsedPrinterArray;
    int  _lastUsedPrinterIndex;
    UINavigationController * _navigationController;
    bool  _observingRotation;
    UIViewController * _parentController;
    UIPopoverController * _poverController;
    id /* block */  _previewCompletionHandler;
    UIPrintInteractionController * _printInteractionController;
    PKPrinter * _printer;
    UIPrintPanelTableViewController * _tableViewController;
    UIWindow * _window;
}

@property (nonatomic) bool annotationsImaged;
@property (nonatomic, readonly) bool contentLargerThanRollPaper;
@property (nonatomic) long long copies;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool duplex;
@property (nonatomic) bool grayscale;
@property (nonatomic, readonly) bool hasJobAccountID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isJobAccountIDRequired;
@property (nonatomic, retain) NSString *jobAccountID;
@property (retain) NSArray *lastUsedPrinterArray;
@property (nonatomic, readonly) long long pageCount;
@property (nonatomic, retain) NSArray *pageRanges;
@property (nonatomic, retain) UIPrintPaper *paper;
@property (nonatomic, readonly) NSArray *paperList;
@property (nonatomic, retain) PKPrinter *printer;
@property (nonatomic) bool punch;
@property (nonatomic) bool scaleUpDocument;
@property (nonatomic, readonly) bool showAnnotationSwitch;
@property (nonatomic, readonly) bool showColor;
@property (nonatomic, readonly) bool showCopies;
@property (nonatomic, readonly) bool showDuplex;
@property (nonatomic, readonly) bool showJobAccountID;
@property (nonatomic, readonly) bool showMoreOptions;
@property (nonatomic, readonly) bool showPageRange;
@property (nonatomic, readonly) bool showPaper;
@property (nonatomic, readonly) bool showPaperSelection;
@property (nonatomic, readonly) bool showPreview;
@property (nonatomic, readonly) bool showPrinterWarning;
@property (nonatomic, readonly) bool showPunch;
@property (nonatomic, readonly) bool showScaleUp;
@property (nonatomic, readonly) bool showStaple;
@property (nonatomic) bool staple;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_keyWindowWillRotate:(id)arg1;
- (void)_presentInParentAnimated:(bool)arg1;
- (id)_removeRollsFrom:(id)arg1;
- (bool)annotationsImaged;
- (void)cancelPrinting;
- (bool)contentLargerThanRollPaper;
- (long long)copies;
- (void)dealloc;
- (void)dismissAnimated:(bool)arg1;
- (void)dismissPrintPanel:(bool)arg1 animated:(bool)arg2;
- (bool)duplex;
- (bool)filtersPrinters;
- (bool)grayscale;
- (bool)hasJobAccountID;
- (id)initWithPrintInterationController:(id)arg1 inParentController:(id)arg2;
- (bool)isJobAccountIDRequired;
- (id)jobAccountID;
- (id)lastUsedPrinterArray;
- (id)localizedPageRangeText;
- (void)lookupLastUsedPrinter;
- (long long)pageCount;
- (id)pageRanges;
- (id)paper;
- (id)paperList;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)presentPrintPanelAnimated:(bool)arg1;
- (void)presentPrintPanelFromBarButtonItem:(id)arg1 animated:(bool)arg2;
- (void)presentPrintPanelFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(bool)arg3;
- (void)printMoreOptionsViewDidDisappear;
- (void)printPanelDidDisappear;
- (void)printPaperViewDidDisappear;
- (void)printRangeViewDidDisappear;
- (id)printer;
- (void)printerBrowserViewDidDisappear;
- (bool)punch;
- (bool)scaleUpDocument;
- (void)setAnnotationsImaged:(bool)arg1;
- (void)setCopies:(long long)arg1;
- (void)setDuplex:(bool)arg1;
- (void)setGrayscale:(bool)arg1;
- (void)setJobAccountID:(id)arg1;
- (void)setLastUsedPrinterArray:(id)arg1;
- (void)setPageRanges:(id)arg1;
- (void)setPaper:(id)arg1;
- (void)setPrinter:(id)arg1;
- (void)setPunch:(bool)arg1;
- (void)setScaleUpDocument:(bool)arg1;
- (void)setStaple:(bool)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)showAnnotationSwitch;
- (bool)showColor;
- (bool)showCopies;
- (bool)showDuplex;
- (bool)showJobAccountID;
- (bool)showMoreOptions;
- (bool)showPageRange;
- (bool)showPaper;
- (bool)showPaperSelection;
- (bool)showPreview;
- (bool)showPrinterWarning;
- (bool)showPunch;
- (bool)showScaleUp;
- (bool)showStaple;
- (bool)staple;
- (void)startPrinting;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)testIfContentLargerThanRollPaper:(id)arg1;

@end
