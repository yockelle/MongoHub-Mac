//
//  ResultsOutlineViewController.h
//  MongoHub
//
//  Created by Syd on 10-4-26.
//  Copyright 2010 MusicPeace.ORG. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface ResultsOutlineViewController : NSObject{
    IBOutlet NSOutlineView *myOutlineView;
    NSMutableArray *_results;
}

@property (nonatomic, retain) NSOutlineView  *myOutlineView;
@property (nonatomic, retain) NSMutableArray *results;
@property (nonatomic, readonly, assign) id selectedItem;
@property (nonatomic, readonly, assign) id selectedDocument;

- (id)rootForItem:(id)item;

@end
