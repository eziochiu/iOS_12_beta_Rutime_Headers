/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISystemNavigationActionDestinationContext : NSObject <BSXPCCoding> {
    NSURL * _URL;
    NSString * _bundleId;
    NSString * _title;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, copy) NSString *bundleId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (id)systemNavigationActionContextWithTitle:(id)arg1 andURL:(id)arg2;
+ (id)systemNavigationActionContextWithTitle:(id)arg1 bundleId:(id)arg2;
+ (id)systemNavigationActionContextWithURL:(id)arg1;

- (void).cxx_destruct;
- (id)URL;
- (id)bundleId;
- (id)debugDescription;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (id)title;

@end
