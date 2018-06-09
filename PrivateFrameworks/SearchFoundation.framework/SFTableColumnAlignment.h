/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFTableColumnAlignment : NSObject <NSCopying, NSSecureCoding, SFTableColumnAlignment> {
    int  _columnAlignment;
    int  _dataAlignment;
    struct { 
        unsigned int columnAlignment : 1; 
        unsigned int dataAlignment : 1; 
        unsigned int isEqualWidth : 1; 
    }  _has;
    bool  _isEqualWidth;
}

@property (nonatomic) int columnAlignment;
@property (nonatomic) int dataAlignment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isEqualWidth;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (int)columnAlignment;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)dataAlignment;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasColumnAlignment;
- (bool)hasDataAlignment;
- (bool)hasIsEqualWidth;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqualWidth;
- (id)jsonData;
- (void)setColumnAlignment:(int)arg1;
- (void)setDataAlignment:(int)arg1;
- (void)setIsEqualWidth:(bool)arg1;

@end
