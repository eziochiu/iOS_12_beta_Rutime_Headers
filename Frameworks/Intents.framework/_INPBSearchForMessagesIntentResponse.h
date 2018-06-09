/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSearchForMessagesIntentResponse : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBSearchForMessagesIntentResponse> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { }  _has;
    NSArray * _messages;
    NSArray * _searchResults;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *messages;
@property (nonatomic, readonly) unsigned long long messagesCount;
@property (nonatomic, copy) NSArray *searchResults;
@property (nonatomic, readonly) unsigned long long searchResultsCount;
@property (readonly) Class superclass;

+ (Class)messagesType;
+ (Class)searchResultsType;

- (void).cxx_destruct;
- (void)addMessages:(id)arg1;
- (void)addSearchResults:(id)arg1;
- (id)associatedCodableAttribute;
- (void)clearMessages;
- (void)clearSearchResults;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)messages;
- (id)messagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)messagesCount;
- (bool)readFrom:(id)arg1;
- (id)searchResults;
- (id)searchResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)searchResultsCount;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setMessages:(id)arg1;
- (void)setSearchResults:(id)arg1;
- (void)writeTo:(id)arg1;

@end
