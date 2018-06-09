/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSDisplayLayoutElement : NSObject <BSDescriptionProviding, BSSettingDescriptionProvider, BSXPCCoding, FBSDisplayLayoutElement, NSCopying, SBSDisplayLayoutElement> {
    bool  _application;
    NSString * _bundleIdentifier;
    bool  _fillsDisplayBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    NSString * _identifier;
    bool  _keyboardFocus;
    long long  _level;
    BSMutableSettings * _otherSettings;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _referenceFrame;
}

@property (getter=isUIApplicationElement, nonatomic) bool UIApplicationElement;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool fillsDisplayBounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic) bool hasKeyboardFocus;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) long long layoutRole;
@property (nonatomic) long long level;
@property (nonatomic, readonly, copy) BSMutableSettings *otherSettings;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } referenceFrame;
@property (getter=isSpringBoardElement, nonatomic, readonly) bool springBoardElement;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (Class)fallbackXPCEncodableClass;
- (bool)fillsDisplayBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (bool)hasKeyboardFocus;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isUIApplicationElement;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (long long)level;
- (id)otherSettings;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })referenceFrame;
- (void)setBundleIdentifier:(id)arg1;
- (void)setFillsDisplayBounds:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHasKeyboardFocus:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLevel:(long long)arg1;
- (void)setOtherSettings:(id)arg1;
- (void)setReferenceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setUIApplicationElement:(bool)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

// Image: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore

- (id)_intents_SpringBoardElement;
- (bool)_intents_isExpectedElement;
- (bool)_intents_isSiri;

// Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices

- (bool)isSpringBoardElement;
- (long long)layoutRole;

@end
