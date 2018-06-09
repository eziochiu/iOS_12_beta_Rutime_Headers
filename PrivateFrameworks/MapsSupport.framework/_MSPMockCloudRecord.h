/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface _MSPMockCloudRecord : NSObject <MSPCloudRecord, NSCoding, NSMutableCopying> {
    NSDate * _cloudRecordModificationDate;
    NSString * _name;
    NSString * _type;
    NSMutableDictionary * _values;
}

@property (nonatomic, readonly) NSDate *cloudRecordModificationDate;
@property (nonatomic, readonly) NSString *cloudRecordName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cloudRecordModificationDate;
- (id)cloudRecordName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(id)arg1 name:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)type;
- (void)updateModificationDate;

@end
