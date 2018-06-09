/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICEvernoteNote : NSObject <NSSecureCoding> {
    NSString * _content;
    NSDate * _created;
    NSArray * _resources;
    NSString * _title;
    NSDate * _updated;
}

@property (nonatomic, retain) NSString *content;
@property (nonatomic, retain) NSDate *created;
@property (nonatomic, retain) NSArray *resources;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSDate *updated;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)content;
- (id)created;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)resources;
- (void)setContent:(id)arg1;
- (void)setCreated:(id)arg1;
- (void)setResources:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUpdated:(id)arg1;
- (id)title;
- (id)updated;

@end
