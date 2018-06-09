/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSSubscriptionFetchOptionDescription : NSObject <NSCopying> {
    Class  _allowedClass;
    NSPredicate * _allowedValuePredicate;
    bool  _container;
    id  _defaultValue;
    NSString * _key;
    unsigned long long  _minCount;
}

@property (nonatomic, retain) Class allowedClass;
@property (nonatomic, copy) NSPredicate *allowedValuePredicate;
@property (getter=isContainer, nonatomic) bool container;
@property (nonatomic, retain) id defaultValue;
@property (nonatomic, copy) NSString *key;
@property (nonatomic) unsigned long long minCount;

- (void).cxx_destruct;
- (Class)allowedClass;
- (id)allowedValuePredicate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultValue;
- (id)init;
- (bool)isContainer;
- (id)key;
- (unsigned long long)minCount;
- (void)setAllowedClass:(Class)arg1;
- (void)setAllowedValuePredicate:(id)arg1;
- (void)setContainer:(bool)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setMinCount:(unsigned long long)arg1;

@end
