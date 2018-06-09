/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NULayoutContextSizerOrientationAttribute : NSObject <NULayoutContextSizerAttribute> {
    unsigned long long  _orientation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long orientation;
@property (readonly) Class superclass;

- (id)description;
- (id)initWithOrientation:(unsigned long long)arg1;
- (bool)matchForLayoutContext:(id)arg1;
- (unsigned long long)orientation;

@end
