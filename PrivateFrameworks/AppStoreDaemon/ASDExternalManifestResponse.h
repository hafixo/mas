//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestResponse.h>

@class NSArray, NSError;

@interface ASDExternalManifestResponse : ASDRequestResponse
{
    NSArray *_results;
}

@property(readonly, nonatomic) NSArray *results; // @synthesize results=_results;
- (void).cxx_destruct;
- (id)initWithResults:(id)arg1;
- (id)init;

// Remaining properties
@property(copy) NSError *error; // @dynamic error;
@property BOOL success; // @dynamic success;

@end
