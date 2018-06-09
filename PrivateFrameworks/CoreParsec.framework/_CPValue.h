/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPValue : PBCodable <NSSecureCoding, _CPFeedbackJSONObject, _CPValue> {
    bool  _bool_value;
    NSData * _bytes_value;
    _CPListValue * _list_value;
    int  _null_value;
    double  _number_value;
    NSString * _string_value;
    _CPStruct * _struct_value;
    unsigned long long  _whichKind;
}

@property (nonatomic) bool bool_value;
@property (nonatomic, copy) NSData *bytes_value;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) id feedbackJSON;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) _CPListValue *list_value;
@property (nonatomic) int null_value;
@property (nonatomic) double number_value;
@property (nonatomic, copy) NSString *string_value;
@property (nonatomic, retain) _CPStruct *struct_value;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long whichKind;

- (void).cxx_destruct;
- (bool)bool_value;
- (id)bytes_value;
- (id)dictionaryRepresentation;
- (id)feedbackJSON;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)list_value;
- (int)null_value;
- (double)number_value;
- (bool)readFrom:(id)arg1;
- (bool)requiresQueryId;
- (void)setBool_value:(bool)arg1;
- (void)setBytes_value:(id)arg1;
- (void)setList_value:(id)arg1;
- (void)setNull_value:(int)arg1;
- (void)setNumber_value:(double)arg1;
- (void)setString_value:(id)arg1;
- (void)setStruct_value:(id)arg1;
- (id)string_value;
- (id)struct_value;
- (unsigned long long)whichKind;
- (void)writeTo:(id)arg1;

@end
