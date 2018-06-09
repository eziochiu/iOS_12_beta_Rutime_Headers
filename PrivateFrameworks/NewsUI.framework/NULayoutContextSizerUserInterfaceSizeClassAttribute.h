/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NULayoutContextSizerUserInterfaceSizeClassAttribute : NSObject <NULayoutContextSizerAttribute> {
    long long  _heightUserInterfaceSizeClass;
    long long  _widthUserInterfaceSizeClass;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long heightUserInterfaceSizeClass;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long widthUserInterfaceSizeClass;

- (id)description;
- (long long)heightUserInterfaceSizeClass;
- (id)initWithWidthUserInterfaceSizeClass:(long long)arg1 heightUserInterfaceSizeClass:(long long)arg2;
- (bool)matchForLayoutContext:(id)arg1;
- (long long)widthUserInterfaceSizeClass;

@end
