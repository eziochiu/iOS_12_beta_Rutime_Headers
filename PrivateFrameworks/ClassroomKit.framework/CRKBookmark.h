/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKBookmark : NSObject <NSSecureCoding> {
    NSArray * _childBookmarks;
    NSString * _name;
    NSString * _urlString;
}

@property (nonatomic, retain) NSArray *childBookmarks;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *urlString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)childBookmarks;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isFolder;
- (id)name;
- (void)setChildBookmarks:(id)arg1;
- (void)setName:(id)arg1;
- (void)setUrlString:(id)arg1;
- (id)urlString;

@end
