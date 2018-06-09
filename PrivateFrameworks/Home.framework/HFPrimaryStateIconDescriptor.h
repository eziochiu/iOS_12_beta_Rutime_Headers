/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFPrimaryStateIconDescriptor : NSObject <HFIconDescriptor> {
    NSString * _identifier;
    long long  _primaryState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long primaryState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)iconDescriptorByMergingWithIconDescriptor:(id)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 primaryState:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (long long)primaryState;

@end
