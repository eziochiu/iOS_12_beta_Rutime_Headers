/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFApiResults : NSObject <NSCopying, NSSecureCoding, SFApiResults> {
    NSArray * _flights;
    struct { 
        unsigned int status : 1; 
        unsigned int resultType : 1; 
    }  _has;
    int  _resultType;
    int  _status;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSArray *flights;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int resultType;
@property (nonatomic) int status;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)flights;
- (bool)hasResultType;
- (bool)hasStatus;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)jsonData;
- (int)resultType;
- (void)setFlights:(id)arg1;
- (void)setResultType:(int)arg1;
- (void)setStatus:(int)arg1;
- (int)status;

@end
