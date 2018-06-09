/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UILibArchiveItem : _UIArchiveItem {
    struct ui_archive { } * _underlyingArchive;
    struct ui_archive_entry { } * _underlyingArchiveEntry;
}

@property (readonly) struct ui_archive { }*underlyingArchive;
@property (readonly) struct ui_archive_entry { }*underlyingArchiveEntry;

+ (id)itemByReadingAttributesFromUnderlyingArchiveEntry:(struct ui_archive_entry { }*)arg1 archive:(struct ui_archive { }*)arg2;

- (struct ui_archive { }*)underlyingArchive;
- (struct ui_archive_entry { }*)underlyingArchiveEntry;

@end