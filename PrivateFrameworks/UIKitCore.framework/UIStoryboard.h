/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIStoryboard : NSObject {
    NSBundle * bundle;
    NSString * designatedEntryPointIdentifier;
    NSDictionary * identifierToExternalStoryboardReferenceMap;
    NSDictionary * identifierToNibNameMap;
    NSMutableDictionary * identifierToUINibMap;
    NSString * storyboardFileName;
}

@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) NSString *designatedEntryPointIdentifier;
@property (nonatomic, readonly) NSDictionary *identifierToExternalStoryboardReferenceMap;
@property (nonatomic, readonly) NSDictionary *identifierToNibNameMap;
@property (nonatomic, readonly) NSMutableDictionary *identifierToUINibMap;
@property (readonly) NSString *name;
@property (nonatomic, readonly) NSString *storyboardFileName;

+ (id)storyboardWithName:(id)arg1 bundle:(id)arg2;

- (id)bundle;
- (bool)containsNibNamed:(id)arg1;
- (void)dealloc;
- (id)designatedEntryPointIdentifier;
- (id)identifierForStringsFile;
- (id)identifierToExternalStoryboardReferenceMap;
- (id)identifierToNibNameMap;
- (id)identifierToUINibMap;
- (id)initWithBundle:(id)arg1 storyboardFileName:(id)arg2 identifierToNibNameMap:(id)arg3 identifierToExternalStoryboardReferenceMap:(id)arg4 designatedEntryPointIdentifier:(id)arg5;
- (id)instantiateInitialViewController;
- (id)instantiateViewControllerReferencedByPlaceholderWithIdentifier:(id)arg1;
- (id)instantiateViewControllerWithIdentifier:(id)arg1;
- (id)name;
- (id)nibForStoryboardNibNamed:(id)arg1;
- (id)nibForViewControllerWithIdentifier:(id)arg1;
- (id)referencedStoryboardForExternalReferenceInfo:(id)arg1;
- (id)storyboardFileName;

@end
