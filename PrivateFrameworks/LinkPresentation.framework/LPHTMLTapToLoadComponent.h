/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPHTMLTapToLoadComponent : LPHTMLComponent <DOMEventListener> {
    DOMElement * _tapToLoadLabelElement;
    DOMElement * _tapToLoadSpinnerElement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)ruleDictionaryForStyle:(id)arg1;
+ (id)styleSet;

- (void).cxx_destruct;
- (void)buildComponents;
- (void)handleEvent:(id)arg1;
- (id)initWithThemePath:(id)arg1 generator:(id)arg2;

@end
