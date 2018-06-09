/* made by EzioChiu
   Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

@interface CLSHandout : CLSObject <CLSRelationable> {
    NSDate * _dateLastReviewed;
    NSDate * _dateOfPublication;
    NSDate * _dueDate;
    NSString * _instructions;
    NSError * _publishError;
    long long  _publishingState;
    bool  _reviewed;
    long long  _state;
    NSString * _title;
}

@property (nonatomic, readonly) NSArray *attachments;
@property (nonatomic, retain) NSDate *dateLastReviewed;
@property (nonatomic, retain) NSDate *dateOfPublication;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDate *dueDate;
@property (nonatomic, readonly) CLSClass *effectiveClass;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *instructions;
@property (nonatomic, retain) NSError *publishError;
@property (nonatomic) long long publishingState;
@property (nonatomic, readonly) NSArray *recipients;
@property (getter=isReviewed, nonatomic) bool reviewed;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (id)relations;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (void)addHandoutAttachment:(id)arg1;
- (void)addHandoutRecipient:(id)arg1;
- (id)attachments;
- (id)dateLastReviewed;
- (id)dateOfPublication;
- (id)dictionaryRepresentation;
- (id)dueDate;
- (id)effectiveClass;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)instructions;
- (bool)isReviewed;
- (void)mergeWithObject:(id)arg1;
- (id)publishError;
- (long long)publishingState;
- (id)recipients;
- (void)removeHandoutAttachment:(id)arg1;
- (void)removeHandoutRecipient:(id)arg1;
- (void)setDateLastReviewed:(id)arg1;
- (void)setDateOfPublication:(id)arg1;
- (void)setDueDate:(id)arg1;
- (void)setInstructions:(id)arg1;
- (void)setPublishError:(id)arg1;
- (void)setPublishingState:(long long)arg1;
- (void)setReviewed:(bool)arg1;
- (void)setState:(long long)arg1;
- (void)setTitle:(id)arg1;
- (long long)state;
- (id)title;
- (bool)validateObject:(id*)arg1;

@end
