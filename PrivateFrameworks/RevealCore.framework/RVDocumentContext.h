/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RevealCore.framework/RevealCore
 */

@interface RVDocumentContext : NSObject <NSSecureCoding> {
    NSString * authorContactUUID;
    NSString * authorEmailAddress;
    NSString * authorName;
    NSDate * contentReferenceDate;
    NSTimeZone * contentReferenceTimeZone;
    NSString * contentSubject;
    NSString * coreSpotlightUniqueIdentifier;
    NSURL * documentURL;
    NSArray * existingDDResultsList;
    NSString * selectedText;
}

@property (nonatomic, copy) NSString *authorContactUUID;
@property (nonatomic, copy) NSString *authorEmailAddress;
@property (nonatomic, copy) NSString *authorName;
@property (nonatomic, copy) NSDate *contentReferenceDate;
@property (nonatomic, copy) NSTimeZone *contentReferenceTimeZone;
@property (nonatomic, copy) NSString *contentSubject;
@property (nonatomic, copy) NSString *coreSpotlightUniqueIdentifier;
@property (nonatomic, copy) NSURL *documentURL;
@property (nonatomic, copy) NSArray *existingDDResultsList;
@property (nonatomic, copy) NSString *selectedText;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)authorContactUUID;
- (id)authorEmailAddress;
- (id)authorName;
- (id)contentReferenceDate;
- (id)contentReferenceTimeZone;
- (id)contentSubject;
- (id)coreSpotlightUniqueIdentifier;
- (id)documentURL;
- (void)encodeWithCoder:(id)arg1;
- (id)existingDDResultsList;
- (id)initWithCoder:(id)arg1;
- (id)selectedText;
- (void)setAuthorContactUUID:(id)arg1;
- (void)setAuthorEmailAddress:(id)arg1;
- (void)setAuthorName:(id)arg1;
- (void)setContentReferenceDate:(id)arg1;
- (void)setContentReferenceTimeZone:(id)arg1;
- (void)setContentSubject:(id)arg1;
- (void)setCoreSpotlightUniqueIdentifier:(id)arg1;
- (void)setDocumentURL:(id)arg1;
- (void)setExistingDDResultsList:(id)arg1;
- (void)setNameAndEmailWithRawSenderField:(id)arg1;
- (void)setSelectedText:(id)arg1;

@end
