/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFSuggestionEngagementFeedback : SFFeedback {
    SFSearchSuggestion * _suggestion;
}

@property (nonatomic, retain) SFSearchSuggestion *suggestion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuggestion:(id)arg1;
- (void)setSuggestion:(id)arg1;
- (id)suggestion;

@end
