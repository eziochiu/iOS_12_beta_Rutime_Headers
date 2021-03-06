/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NULayoutContextSizerUserInterfaceIdiomAttribute : NSObject <NULayoutContextSizerAttribute> {
    long long  _userInterfaceIdiom;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long userInterfaceIdiom;

- (id)description;
- (id)initWithUserInterfaceIdiom:(long long)arg1;
- (bool)matchForLayoutContext:(id)arg1;
- (long long)userInterfaceIdiom;

@end
