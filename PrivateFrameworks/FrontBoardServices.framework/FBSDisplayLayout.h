/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSDisplayLayout : NSObject <BSDescriptionProviding, BSXPCCoding> {
    long long  _backlightLevel;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    FBSDisplayConfiguration * _displayConfiguration;
    long long  _displayType;
    NSMutableArray * _elements;
    long long  _interfaceOrientation;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _referenceBounds;
    NSDate * _timestamp;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long displayBacklightLevel;
@property (nonatomic, retain) FBSDisplayConfiguration *displayConfiguration;
@property (nonatomic) long long displayType;
@property (nonatomic, copy) NSArray *elements;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } referenceBounds;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *timestamp;

- (void).cxx_destruct;
- (id)_initWithElements:(id)arg1;
- (void)_sortElements;
- (void)addElement:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)display;
- (long long)displayBacklightLevel;
- (id)displayConfiguration;
- (long long)displayType;
- (id)elements;
- (void)encodeWithXPCDictionary:(id)arg1;
- (void)finalizeLayout;
- (id)init;
- (id)initWithXPCDictionary:(id)arg1;
- (long long)interfaceOrientation;
- (bool)isEqual:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })referenceBounds;
- (void)removeElement:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDisplayBacklightLevel:(long long)arg1;
- (void)setDisplayConfiguration:(id)arg1;
- (void)setDisplayType:(long long)arg1;
- (void)setElements:(id)arg1;
- (void)setInterfaceOrientation:(long long)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)timestamp;

@end
