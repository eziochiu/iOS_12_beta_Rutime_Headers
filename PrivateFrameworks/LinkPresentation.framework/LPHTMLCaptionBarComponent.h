/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPHTMLCaptionBarComponent : LPHTMLComponent {
    LPCaptionBarPresentationProperties * _presentationProperties;
    LPCaptionBarStyle * _style;
    bool  _useProgressSpinner;
}

+ (id)additionalRulesForStyle:(id)arg1;
+ (id)baseRules;
+ (id)ruleDictionaryForStyle:(id)arg1;
+ (id)styleSet;

- (void).cxx_destruct;
- (void)buildComponents;
- (id)initWithStyle:(id)arg1 presentationProperties:(id)arg2 useProgressSpinner:(bool)arg3 themePath:(id)arg4 generator:(id)arg5;

@end
