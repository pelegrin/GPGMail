/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableSet, NSOperationQueue;

@interface MFRemoteAttachmentManager : NSObject
{
    NSMutableSet *_attachments;
    NSOperationQueue *_downloadQueue;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSOperationQueue *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
- (void).cxx_destruct;
- (id)_attachmentForURL:(id)arg1 filename:(id)arg2 mimeType:(id)arg3 filesize:(long long)arg4 downloadDirectory:(id)arg5 isMailDropImageArchive:(BOOL)arg6 isAutoArchive:(BOOL)arg7 allowDownloading:(BOOL)arg8 isMailDropIndividualImage:(BOOL)arg9 expirationDate:(id)arg10;
- (id)remoteAttachmentsByURLForMessage:(id)arg1 allowDownloading:(BOOL)arg2;
- (void)dealloc;
- (id)init;

@end
