/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXWebContentAssembly : NSObject <NFAssembly> {
    unsigned long long  _features;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long features;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned long long)features;
- (id)initWithFeatures:(unsigned long long)arg1;
- (bool)isFeatureEnabled:(unsigned long long)arg1;
- (void)loadInRegistry:(id)arg1;

@end
