/* made by EzioChiu.
 */

@protocol PXGadgetDelegate <NSObject>

@required

- (bool)gadget:(id <PXGadget>)arg1 transitionToViewController:(struct NSObject { Class x1; }*)arg2 animated:(bool)arg3;
- (<PXGridPresentation> *)gridPresentation;
- (PXOneUpPresentation *)oneUpPresentation;
- (bool)scrollGadgetToVisible:(id <PXGadget>)arg1 animated:(bool)arg2;

@optional

- (void)gadget:(void *)arg1 animateChanges:(void *)arg2; // needs 2 arg types, found 6: <PXGadget> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)gadget:(id <PXGadget>)arg1 didChange:(unsigned long long)arg2;
- (struct NSObject { Class x1; }*)gadgetViewControllerHostingGadget:(id <PXGadget>)arg1;
- (<PXGadgetDelegate> *)nextGadgetResponder;
- (void)setNextGadgetResponder:(id <PXGadgetDelegate>)arg1;

@end
