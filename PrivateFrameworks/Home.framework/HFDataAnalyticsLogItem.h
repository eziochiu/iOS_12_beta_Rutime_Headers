/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFDataAnalyticsLogItem : HFItem <NAIdentifiable> {
    <HFMediaProfileContainer> * _mediaProfileContainer;
    NSString * _name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfileContainer;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;

+ (id)na_identity;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)fetchLog;
- (unsigned long long)hash;
- (id)init;
- (id)initWithMediaProfileContainer:(id)arg1 name:(id)arg2;
- (bool)isDisplayDisabled;
- (bool)isEqual:(id)arg1;
- (id)mediaProfileContainer;
- (id)name;

@end
